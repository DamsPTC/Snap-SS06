/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ddcf58; end: 102ddcf9f;  */

void FUN_102ddcf58(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6572756c696166;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73736563637573;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe700000000000000);
  return;
}



/* Entry: 102ddcfa0; end: 102ddd00f;  */

void FUN_102ddcfa0(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x6572756c696166;
  if (cVar2 != '\x01') {
    uVar1 = 0x73736563637573;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddd010; end: 102ddd053;  */

void FUN_102ddd010(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102ddd054; end: 102ddd1fb;  */

void FUN_102ddd054(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x74616863;
  if (cVar3 != '\x01') {
    uVar4 = 0x70616e73;
  }
  uVar1 = 0x747065636361;
  if (cVar3 != '\0') {
    uVar1 = (ulong)uVar4;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe400000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddd1fc; end: 102ddd247;  */

void FUN_102ddd1fc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x74616863;
  if (cVar3 != '\x01') {
    uVar4 = 0x70616e73;
  }
  uVar1 = 0x747065636361;
  if (cVar3 != '\0') {
    uVar1 = (ulong)uVar4;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe400000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102ddd248; end: 102ddd48b;  */

void FUN_102ddd248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6572756c696166;
  if (bVar3 != 2) {
    uVar1 = 0x656c6c65636e6163;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar4 = 0x6574706d65747461;
  if (bVar3 != 0) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x73736563637573;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddd48c; end: 102ddd50b;  */

void FUN_102ddd48c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  uVar1 = 0x6572756c696166;
  if (bVar3 != 2) {
    uVar1 = 0x656c6c65636e6163;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar4 = 0x6574706d65747461;
  if (bVar3 != 0) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x73736563637573;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102ddd50c; end: 102ddd66f;  */

void FUN_102ddd50c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6465727265666564;
  if (cVar3 != '\x01') {
    uVar1 = 0x74616964656d6d69;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddd670; end: 102ddd6bf;  */

void FUN_102ddd670(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102ddd6c0; end: 102ddd7f3;  */

void FUN_102ddd6c0(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar1 = "image_fetch_failed";
  if (cVar2 != '\x01') {
    pcVar1 = "mediate";
  }
  func_0x000107c5fb58(auStack_68,0xd000000000000012,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddd7f4; end: 102ddd7ff;  */

void FUN_102ddd7f4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102ddd800; end: 102ddd877;  */

void FUN_102ddd800(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102ddd878; end: 102ddd8af;  */

void FUN_102ddd878(undefined8 *param_1)

{
  char *pcVar1;
  char *unaff_x20;
  
  pcVar1 = "image_fetch_failed";
  if (*unaff_x20 != '\x01') {
    pcVar1 = "mediate";
  }
  *param_1 = 0xd000000000000012;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 102ddd8b0; end: 102ddd8df;  */

void FUN_102ddd8b0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102ddd8e0; end: 102dddc73;  */

/* WARNING: Possible PIC construction at 0x000102ddd9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddd9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddda08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddda20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ddd9c8) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9d0) */
/* WARNING: Removing unreachable block (ram,0x000102ddda24) */
/* WARNING: Removing unreachable block (ram,0x000102ddda2c) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9f0) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9b8) */
/* WARNING: Removing unreachable block (ram,0x000102ddda0c) */
/* WARNING: Removing unreachable block (ram,0x000102ddda58) */
/* WARNING: Removing unreachable block (ram,0x000102ddda10) */

void FUN_102ddd8e0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126cc8c0;
  func_0x000107c61168();
  func_0x000107c4f03c();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5fadc(0x746e656d6f6d,0xe600000000000000);
    uVar1 = 0x6f795f6465646461;
    if (param_1 != '\x01') {
      uVar1 = 0x725f646e65697266;
    }
    uVar2 = 0xee006b6361625f75;
    if (param_1 != '\x01') {
      uVar2 = 0xee00747365757165;
    }
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 102dddc74; end: 102dddf7f;  */

/* WARNING: Possible PIC construction at 0x000102dddd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dddd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddde3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddde4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddded8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dddee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dddf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dddf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dddf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dddeec) */
/* WARNING: Removing unreachable block (ram,0x000102dddf5c) */
/* WARNING: Removing unreachable block (ram,0x000102dddef4) */
/* WARNING: Removing unreachable block (ram,0x000102dddf4c) */
/* WARNING: Removing unreachable block (ram,0x000102dddf18) */
/* WARNING: Removing unreachable block (ram,0x000102dddedc) */
/* WARNING: Removing unreachable block (ram,0x000102ddde50) */
/* WARNING: Removing unreachable block (ram,0x000102ddde98) */
/* WARNING: Removing unreachable block (ram,0x000102dddea0) */
/* WARNING: Removing unreachable block (ram,0x000102ddde40) */
/* WARNING: Removing unreachable block (ram,0x000102dddd80) */
/* WARNING: Removing unreachable block (ram,0x000102ddddd4) */
/* WARNING: Removing unreachable block (ram,0x000102ddddd8) */
/* WARNING: Removing unreachable block (ram,0x000102ddddf4) */
/* WARNING: Removing unreachable block (ram,0x000102ddddf8) */
/* WARNING: Removing unreachable block (ram,0x000102ddde00) */
/* WARNING: Removing unreachable block (ram,0x000102ddde04) */
/* WARNING: Removing unreachable block (ram,0x000102dddd70) */
/* WARNING: Removing unreachable block (ram,0x000102dddf34) */
/* WARNING: Removing unreachable block (ram,0x000102dddf7c) */
/* WARNING: Removing unreachable block (ram,0x000102dddf38) */

void FUN_102dddc74(char param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126cc8c0;
  func_0x000107c61168();
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    uVar4 = 0xe600000000000000;
    func_0x000107c5fadc(0x6e6f69746361,0xe600000000000000);
    if (param_1 == '\0') {
      uVar3 = 0x747065636361;
    }
    else {
      uVar1 = 0x74616863;
      if (param_1 != '\x01') {
        uVar1 = 0x70616e73;
      }
      uVar3 = (ulong)uVar1;
      uVar4 = 0xe400000000000000;
    }
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102dddf80; end: 102dde197;  */

/* WARNING: Possible PIC construction at 0x000102dde058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dde164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dde0f8) */
/* WARNING: Removing unreachable block (ram,0x000102dde168) */
/* WARNING: Removing unreachable block (ram,0x000102dde100) */
/* WARNING: Removing unreachable block (ram,0x000102dde158) */
/* WARNING: Removing unreachable block (ram,0x000102dde124) */
/* WARNING: Removing unreachable block (ram,0x000102dde0e8) */
/* WARNING: Removing unreachable block (ram,0x000102dde06c) */
/* WARNING: Removing unreachable block (ram,0x000102dde0a4) */
/* WARNING: Removing unreachable block (ram,0x000102dde05c) */
/* WARNING: Removing unreachable block (ram,0x000102dde140) */
/* WARNING: Removing unreachable block (ram,0x000102dde194) */
/* WARNING: Removing unreachable block (ram,0x000102dde144) */

void FUN_102dddf80(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126cc8c0;
  func_0x000107c61168();
  func_0x000107c3e230();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5fadc(0x746e656d6f6d,0xe600000000000000);
    uVar1 = 0x6f795f6465646461;
    if (param_1 != '\x01') {
      uVar1 = 0x725f646e65697266;
    }
    uVar2 = 0xee006b6361625f75;
    if (param_1 != '\x01') {
      uVar2 = 0xee00747365757165;
    }
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 102dde198; end: 102dde1bb;  */

void FUN_102dde198(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dde1bc; end: 102dde1cb;  */

/* WARNING: Possible PIC construction at 0x000102ddd9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddd9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddda08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ddda20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ddd9c8) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9d0) */
/* WARNING: Removing unreachable block (ram,0x000102ddda24) */
/* WARNING: Removing unreachable block (ram,0x000102ddda2c) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9f0) */
/* WARNING: Removing unreachable block (ram,0x000102ddd9b8) */
/* WARNING: Removing unreachable block (ram,0x000102ddda0c) */
/* WARNING: Removing unreachable block (ram,0x000102ddda58) */
/* WARNING: Removing unreachable block (ram,0x000102ddda10) */

void FUN_102dde1bc(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126cc8c0;
  func_0x000107c61168();
  func_0x000107c4f03c();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5fadc(0x746e656d6f6d,0xe600000000000000);
    uVar1 = 0x6f795f6465646461;
    if (param_1 != '\x01') {
      uVar1 = 0x725f646e65697266;
    }
    uVar2 = 0xee006b6361625f75;
    if (param_1 != '\x01') {
      uVar2 = 0xee00747365757165;
    }
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 102dde1cc; end: 102dde22f;  */

ulong FUN_102dde1cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102dde230; end: 102dde233;  */

void FUN_102dde230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4fdf0;
  func_0x000107c61520(&UNK_10db4fdf0,&UNK_1105d2c38);
  puRam0000000112f19700 = puVar1;
  return;
}



/* Entry: 102dde234; end: 102dde273;  */

void FUN_102dde234(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4fdf0;
  func_0x000107c61520(&UNK_10db4fdf0,&UNK_1105d2c38);
  puRam0000000112f19700 = puVar1;
  return;
}



/* Entry: 102dde274; end: 102dde277;  */

void FUN_102dde274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4fe90;
  func_0x000107c61520(&UNK_10db4fe90,&UNK_1105d2cc8);
  puRam0000000112f19708 = puVar1;
  return;
}



/* Entry: 102dde278; end: 102dde2b7;  */

void FUN_102dde278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4fe90;
  func_0x000107c61520(&UNK_10db4fe90,&UNK_1105d2cc8);
  puRam0000000112f19708 = puVar1;
  return;
}



/* Entry: 102dde2b8; end: 102dde2bb;  */

void FUN_102dde2b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4ff30;
  func_0x000107c61520(&UNK_10db4ff30,&UNK_1105d2d58);
  puRam0000000112f19710 = puVar1;
  return;
}



/* Entry: 102dde2bc; end: 102dde2fb;  */

void FUN_102dde2bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4ff30;
  func_0x000107c61520(&UNK_10db4ff30,&UNK_1105d2d58);
  puRam0000000112f19710 = puVar1;
  return;
}



/* Entry: 102dde2fc; end: 102dde2ff;  */

void FUN_102dde2fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4ffd0;
  func_0x000107c61520(&UNK_10db4ffd0,&UNK_1105d2de8);
  puRam0000000112f19718 = puVar1;
  return;
}



/* Entry: 102dde300; end: 102dde33f;  */

void FUN_102dde300(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4ffd0;
  func_0x000107c61520(&UNK_10db4ffd0,&UNK_1105d2de8);
  puRam0000000112f19718 = puVar1;
  return;
}



/* Entry: 102dde340; end: 102dde343;  */

void FUN_102dde340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50070;
  func_0x000107c61520(&UNK_10db50070,&UNK_1105d2e78);
  puRam0000000112f19720 = puVar1;
  return;
}



/* Entry: 102dde344; end: 102dde383;  */

void FUN_102dde344(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50070;
  func_0x000107c61520(&UNK_10db50070,&UNK_1105d2e78);
  puRam0000000112f19720 = puVar1;
  return;
}



/* Entry: 102dde384; end: 102dde387;  */

void FUN_102dde384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50110;
  func_0x000107c61520(&UNK_10db50110,&UNK_1105d2f08);
  puRam0000000112f19728 = puVar1;
  return;
}



/* Entry: 102dde388; end: 102dde3c7;  */

void FUN_102dde388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50110;
  func_0x000107c61520(&UNK_10db50110,&UNK_1105d2f08);
  puRam0000000112f19728 = puVar1;
  return;
}



/* Entry: 102dde3c8; end: 102dde86f;  */

void FUN_102dde3c8(void)

{
  return;
}



/* Entry: 102dde870; end: 102dde9db;  */

void FUN_102dde870(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113804f80);
  func_0x000107c5fad4(lVar4,0xd000000000000015,0x800000010f10e360);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102dde9dc; end: 102ddea6f;  */

void FUN_102dde9dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f19850 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ea98(0xff);
  puVar2 = PTR___s10AppIntents11IntentModesVs10SetAlgebraAAMc_110345fc0;
  func_0x000107c61520(PTR___s10AppIntents11IntentModesVs10SetAlgebraAAMc_110345fc0,uVar1);
  puRam0000000112f19850 = puVar2;
  return;
}



/* Entry: 102ddea70; end: 102ddebfb;  */

void FUN_102ddea70(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if (iVar1 == 0) {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d3200;
    func_0x000107c613fc(&UNK_1105d3200,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x102de5560;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    puVar5 = &UNK_10db50648;
    puVar6 = &UNK_10db50640;
    puVar7 = &UNK_10db50638;
    puVar3 = &UNK_1105d3228;
  }
  else {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d3250;
    func_0x000107c613fc(&UNK_1105d3250,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x102de5560;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined **)(puVar2 + 0x28) = &UNK_10db50930;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined **)(puVar2 + 0x38) = &UNK_10db50938;
    puVar5 = &UNK_10db50660;
    puVar6 = &UNK_10db50658;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined **)(puVar2 + 0x48) = &UNK_10db50940;
    puVar7 = &UNK_10db50650;
    puVar3 = &UNK_1105d3278;
    *(undefined8 *)(puVar2 + 0x50) = 0;
  }
  func_0x000107c613fc(puVar3,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = 0x102de5560;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  func_0x000107c61580(uVar4,3);
  *param_1 = puVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar6;
  param_1[3] = puVar2;
  param_1[4] = puVar5;
  param_1[5] = puVar3;
  return;
}



/* Entry: 102ddebfc; end: 102ddec17;  */

void FUN_102ddebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddec18,0,0);
  return;
}



/* Entry: 102ddec18; end: 102dded2f;  */

void FUN_102ddec18(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar5 = *(int **)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c5eaa4(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  func_0x000107c5eaa4(unaff_x22 + 0xa8);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xa8);
  puVar8 = &UNK_1105d3008;
  func_0x000107c613fc(&UNK_1105d3008,0x28,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar8;
  *(undefined8 *)(puVar8 + 0x10) = uVar10;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  *(undefined8 *)(puVar8 + 0x20) = uVar4;
  iVar1 = *piVar5;
  plVar9 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102dded30;
                    /* WARNING: Could not recover jumptable at 0x000102dded2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,uVar6,uVar7,&UNK_10db50288,puVar8);
  return;
}



/* Entry: 102dded30; end: 102dded8b;  */

void FUN_102dded30(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102dded8c;
  }
  else {
    pcVar1 = FUN_102ddee04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102dded8c; end: 102ddee03;  */

void FUN_102dded8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c5eaa0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102ddee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddee04; end: 102ddee67;  */

void FUN_102ddee04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102ddee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddee68; end: 102ddeefb;  */

void FUN_102ddee68(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ddeefc;
  plVar2[5] = param_1;
  plVar2[6] = param_2;
  plVar2[2] = param_3;
  plVar2[3] = param_4;
  plVar2[4] = param_5;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[7] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[8] = lVar3;
  plVar2[9] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf058,lVar3,lVar4);
  return;
}



/* Entry: 102ddeefc; end: 102ddef7b;  */

void FUN_102ddeefc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102ddef7c;
  }
  else {
    pcVar2 = (code *)0x102ddefb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102ddef7c; end: 102ddefe3;  */

void FUN_102ddef7c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102ddefac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddefe4; end: 102ddf057;  */

void FUN_102ddefe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf058,uVar1,uVar2);
  return;
}



/* Entry: 102ddf058; end: 102ddf17b;  */

void FUN_102ddf058(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    lVar3 = 0x112f19880;
    func_0x0001000285a8(0x112f19880,&UNK_10db50258);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x50) = uVar2;
    lVar3 = 0;
    func_0x000107c5ea9c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKFTu_110345f68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar4;
    plVar5 = plVar4;
    func_0x000102de0a80();
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ddf17c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb44f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKF_110345f60
    )(uVar2,0,&UNK_1105d30b0,plVar5);
    return;
  }
  piVar6 = *(int **)(unaff_x22 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ddf270;
                    /* WARNING: Could not recover jumptable at 0x000102ddf178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))();
  return;
}



/* Entry: 102ddf17c; end: 102ddf227;  */

void FUN_102ddf17c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar4 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x58));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_102ddf228,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48));
    return;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  FUN_102de1078(uVar5);
  func_0x000107c615c0(uVar5);
  piVar3 = *(int **)(lVar4 + 0x28);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x68) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = 0x102ddf270;
                    /* WARNING: Could not recover jumptable at 0x000102ddf224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 102ddf228; end: 102ddf2e7;  */

void FUN_102ddf228(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_102de1078(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ddf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddf2e8; end: 102ddf357;  */

void FUN_102ddf2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf358,uVar1,uVar2);
  return;
}



/* Entry: 102ddf358; end: 102ddf47b;  */

void FUN_102ddf358(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    lVar3 = 0x112f19880;
    func_0x0001000285a8(0x112f19880,&UNK_10db50258);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x48) = uVar2;
    lVar3 = 0;
    func_0x000107c5ea9c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKFTu_110345f68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar4;
    plVar5 = plVar4;
    func_0x000102de0ba8();
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ddf47c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb44f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKF_110345f60
    )(uVar2,0,&UNK_1105d3138,plVar5);
    return;
  }
  piVar6 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ddf570;
                    /* WARNING: Could not recover jumptable at 0x000102ddf478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))();
  return;
}



/* Entry: 102ddf47c; end: 102ddf527;  */

void FUN_102ddf47c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_102ddf528,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x40));
    return;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  FUN_102de1078(uVar5);
  func_0x000107c615c0(uVar5);
  piVar3 = *(int **)(lVar4 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar4 + 0x60) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = 0x102ddf570;
                    /* WARNING: Could not recover jumptable at 0x000102ddf524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 102ddf528; end: 102ddf5e7;  */

void FUN_102ddf528(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_102de1078(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ddf56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddf5e8; end: 102ddf60b;  */

void FUN_102ddf5e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f19840 != -1) {
    func_0x000107c61568(0x112f19840,FUN_102dde870);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102ddfdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102ddf60c; end: 102ddf677;  */

void FUN_102ddf60c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ddf678;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar4;
  plVar3[10] = param_1;
  plVar3[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddec18,0,0);
  return;
}



/* Entry: 102ddf678; end: 102ddf6b3;  */

void FUN_102ddf678(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddf6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ddf6b4; end: 102ddf707;  */

void FUN_102ddf6b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_102ddffd4();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 102ddf708; end: 102ddf873;  */

void FUN_102ddf708(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar2,0x113804f98);
  func_0x000107c5fad4(lVar4,0xd00000000000001a,0x800000010f10e340);
  func_0x000107c5ef04(puVar3);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 102ddf874; end: 102ddf9ff;  */

void FUN_102ddf874(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if (iVar1 == 0) {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d3160;
    func_0x000107c613fc(&UNK_1105d3160,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x102de5560;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    puVar5 = &UNK_10db50610;
    puVar6 = &UNK_10db50608;
    puVar7 = &UNK_10db50600;
    puVar3 = &UNK_1105d3188;
  }
  else {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d31b0;
    func_0x000107c613fc(&UNK_1105d31b0,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x102de5560;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined **)(puVar2 + 0x28) = &UNK_10db50930;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined **)(puVar2 + 0x38) = &UNK_10db50938;
    puVar5 = &UNK_10db50628;
    puVar6 = &UNK_10db50620;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined **)(puVar2 + 0x48) = &UNK_10db50940;
    puVar7 = &UNK_10db50618;
    puVar3 = &UNK_1105d31d8;
    *(undefined8 *)(puVar2 + 0x50) = 0;
  }
  func_0x000107c613fc(puVar3,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = 0x102de5560;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  func_0x000107c61580(uVar4,3);
  *param_1 = puVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar6;
  param_1[3] = puVar2;
  param_1[4] = puVar5;
  param_1[5] = puVar3;
  return;
}



/* Entry: 102ddfa00; end: 102ddfa1b;  */

void FUN_102ddfa00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddfa1c,0,0);
  return;
}



/* Entry: 102ddfa1c; end: 102ddfb0b;  */

void FUN_102ddfa1c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5ea2c(unaff_x22 + 0x10);
  piVar5 = *(int **)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c5eaa4(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  puVar7 = &UNK_1105d3030;
  func_0x000107c613fc(&UNK_1105d3030,0x20,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  iVar1 = *piVar5;
  plVar8 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102ddfb0c;
                    /* WARNING: Could not recover jumptable at 0x000102ddfb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,uVar6,&UNK_10db502a0,puVar7);
  return;
}



/* Entry: 102ddfb0c; end: 102ddfb67;  */

void FUN_102ddfb0c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ddfb68;
  }
  else {
    pcVar1 = FUN_102ddfbe0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ddfb68; end: 102ddfbdf;  */

void FUN_102ddfb68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c5eaa0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102ddfbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddfbe0; end: 102ddfc43;  */

void FUN_102ddfbe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102ddfc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddfc44; end: 102ddfccf;  */

void FUN_102ddfc44(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ddfcd0;
  plVar4[4] = param_1;
  plVar4[5] = param_2;
  plVar4[2] = param_3;
  plVar4[3] = param_4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar4[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[7] = lVar1;
  plVar4[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf358,lVar1,lVar2);
  return;
}



/* Entry: 102ddfcd0; end: 102ddfd4f;  */

void FUN_102ddfcd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    uVar2 = 0x102de1798;
  }
  else {
    uVar2 = 0x102de17bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar2,uVar4,uVar1);
  return;
}



/* Entry: 102ddfd50; end: 102ddfd6b;  */

void FUN_102ddfd50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f198a0 != -1) {
    func_0x000107c61568(0x112f198a0,FUN_102ddf708);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102ddfdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102ddfd6c; end: 102ddfdd7;  */

void FUN_102ddfd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  if (*param_4 != -1) {
    func_0x000107c61568(param_4,param_6);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102ddfdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102ddfdd8; end: 102ddff17;  */

void FUN_102ddfdd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112f19848;
  func_0x0001000285a8(0x112f19848,&UNK_10db50230);
  lVar3 = 0;
  func_0x000107c5ea98();
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar2,uVar9 + lVar10 * 2,uVar8 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar1 = lVar2 + uVar9;
  func_0x000107c5ea88(lVar1);
  lVar4 = 0;
  func_0x000107c5ea94();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ea90(puVar5);
  func_0x000107c5ea8c(lVar1 + lVar10,puVar5);
  (**(code **)(lVar11 + 8))(puVar5,lVar4);
  lStack_58 = lVar2;
  FUN_102dde9dc();
  uVar6 = 0x112f19858;
  func_0x0001000285a8(0x112f19858,&UNK_10db50238);
  uVar7 = uVar6;
  func_0x000102ddea20();
  func_0x000107c60264(param_1,&lStack_58,uVar6,uVar7,lVar3,puVar5);
  return;
}



/* Entry: 102ddff18; end: 102ddff1f;  */

undefined8 FUN_102ddff18(void)

{
  return 0;
}



/* Entry: 102ddff20; end: 102ddff83;  */

void FUN_102ddff20(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102de1794;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
  plVar3[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddfa1c,0,0);
  return;
}



/* Entry: 102ddff84; end: 102ddffd3;  */

void FUN_102ddff84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102de0648();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 102ddffd4; end: 102de05cf;  */

long FUN_102ddffd4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined4 uStack_11c;
  code *pcStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  code *pcStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined4 uStack_cc;
  code *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x112f19868;
  func_0x0001000285a8(0x112f19868,&UNK_10db50240);
  lVar2 = 0;
  uStack_a8 = uVar3;
  func_0x000107c5ed3c();
  lVar6 = *(long *)(lVar2 + -8);
  uStack_a0 = *(undefined8 *)(lVar6 + 0x40);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_98 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar7 - uStack_98;
  lStack_128 = lVar8;
  func_0x000107c5fad4(lVar7,0x44492072657355,0xe700000000000000);
  puStack_108 = puVar4;
  func_0x000107c5ef04(puVar4);
  lVar1 = 0;
  func_0x000107c5ed38();
  uStack_b8 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_b0 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar8 - uStack_b0;
  uStack_cc = *(undefined4 *)
               PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
  ;
  pcStack_c8 = *(code **)(extraout_x8_01 + 0x68);
  (*pcStack_c8)(lVar5);
  func_0x000107c5ed40(lVar8,lVar7,0x74726f6853707041,0xec00000073747563,puVar4,lVar5,0,0,0x100);
  lVar1 = 0x112f19870;
  func_0x0001000285a8(0x112f19870,&UNK_10db50248);
  uStack_f0 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_d8 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar5 - uStack_d8;
  pcStack_e8 = *(code **)(lVar6 + 0x38);
  (*pcStack_e8)(lVar5,1,1,lVar2);
  uStack_90 = 0;
  uStack_88 = 0;
  lVar1 = 0x112f19878;
  func_0x0001000285a8(0x112f19878,&UNK_10db50250);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar5 - extraout_x8_02;
  lVar1 = 0;
  func_0x000107c5fac4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar9,1,1,lVar1);
  lVar1 = 0x112f19880;
  func_0x0001000285a8(0x112f19880,&UNK_10db50258);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_f8 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar9 - uStack_f8;
  lVar6 = 0;
  func_0x000107c5ea9c();
  pcStack_100 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcStack_100)(lVar10,1,1,lVar6);
  lVar8 = 0;
  func_0x000107c5eab0();
  lVar1 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_110 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar10 - uStack_110;
  uStack_11c = *(undefined4 *)
                PTR___s10AppIntents23InputConnectionBehaviorO7defaultyA2CmFWC_110346010;
  pcStack_118 = *(code **)(extraout_x8_03 + 0x68);
  (*pcStack_118)(lVar11,uStack_11c,lVar8);
  lVar2 = lStack_128;
  func_0x000107c5eaa8(lStack_128,lVar5,&uStack_90,lVar9,lVar10,lVar11);
  func_0x0001000285a8(0x112f19888,&UNK_10db50260);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - uStack_98;
  func_0x000107c5fad4(lVar7,0x6e49207261656c43,0xee006563616c5020);
  puVar4 = puStack_108;
  func_0x000107c5ef04(puStack_108);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar11 - uStack_b0;
  (*pcStack_c8)(lVar5,uStack_cc,lStack_c0);
  func_0x000107c5ed40(lVar11,lVar7,0x74726f6853707041,0xec00000073747563,puVar4,lVar5,0,0,0x100);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - uStack_d8;
  (*pcStack_e8)(lVar5,1,1,lStack_e0);
  uStack_90 = CONCAT71(uStack_90._1_7_,2);
  lVar1 = 0x112f19890;
  func_0x0001000285a8(0x112f19890,&UNK_10db50268);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - extraout_x8_04;
  lVar1 = 0;
  func_0x000107c5fc9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar7,1,1,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - uStack_f8;
  (*pcStack_100)(lVar9,1,1,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar9 - uStack_110;
  (*pcStack_118)(lVar1,uStack_11c,lVar8);
  func_0x000107c5eaac(lVar11,lVar5,&uStack_90,lVar7,lVar9,lVar1);
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar3 = 0;
  func_0x000107c5ea54();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  func_0x000107c5ea50();
  func_0x000107c5ea30(&uStack_90,uVar3,FUN_102ddea70,0);
  return lVar2;
}



/* Entry: 102de05d0; end: 102de0647;  */

void FUN_102de05d0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102de17ec;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar5[2] = lVar1;
  func_0x000107c5fce8();
  plVar5[3] = lVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar5[4] = (long)plVar2;
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_102ddeefc;
  plVar2[5] = param_1;
  plVar2[6] = param_2;
  plVar2[2] = lVar4;
  plVar2[3] = lVar3;
  plVar2[4] = lVar6;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[7] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[8] = lVar3;
  plVar2[9] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf058,lVar3,lVar4);
  return;
}



/* Entry: 102de0648; end: 102de09d3;  */

undefined1  [16] FUN_102de0648(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112f19868,&UNK_10db50240);
  lVar2 = 0;
  func_0x000107c5ed3c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fad4(lVar6,0x74616e6974736544,0xef4c5255206e6f69);
  func_0x000107c5ef04(lVar7);
  lVar1 = 0;
  func_0x000107c5ed38();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
            );
  func_0x000107c5ed40(lVar5,lVar6,0x74726f6853707041,0xec00000073747563,lVar7,lVar8,0,0,0x100);
  lVar1 = 0x112f19870;
  func_0x0001000285a8(0x112f19870,&UNK_10db50248);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_03;
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar2);
  uStack_80 = 0;
  uStack_78 = 0;
  lVar1 = 0x112f19878;
  func_0x0001000285a8(0x112f19878,&UNK_10db50250);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar8 - extraout_x8_04;
  lVar1 = 0;
  func_0x000107c5fac4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar2,1,1,lVar1);
  lVar1 = 0x112f19880;
  func_0x0001000285a8(0x112f19880,&UNK_10db50258);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar2 - extraout_x8_05;
  lVar1 = 0;
  func_0x000107c5ea9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar7,1,1,lVar1);
  lVar1 = 0;
  func_0x000107c5eab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar7 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_00 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10AppIntents23InputConnectionBehaviorO7defaultyA2CmFWC_110346010);
  func_0x000107c5eaa8(lVar5,lVar8,&uStack_80,lVar2,lVar7,lVar1);
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar3 = 0;
  func_0x000107c5ea54(0);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  func_0x000107c5ea50();
  puVar4 = &uStack_80;
  func_0x000107c5ea30(puVar4,uVar3,FUN_102ddf874,0);
  auVar10._8_8_ = puVar4;
  auVar10._0_8_ = lVar5;
  return auVar10;
}



/* Entry: 102de09d4; end: 102de0a3b;  */

void FUN_102de09d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102de17e8;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[2] = lVar3;
  func_0x000107c5fce8();
  plVar5[3] = lVar3;
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  plVar5[4] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102ddfcd0;
  plVar4[4] = param_1;
  plVar4[5] = param_2;
  plVar4[2] = lVar2;
  plVar4[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar4[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[7] = lVar1;
  plVar4[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddf358,lVar1,lVar2);
  return;
}



/* Entry: 102de0a3c; end: 102de0a3f;  */

void FUN_102de0a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db502f8;
  func_0x000107c61520(&UNK_10db502f8,&UNK_1105d30b0);
  puRam0000000112f198a8 = puVar1;
  return;
}



/* Entry: 102de0a40; end: 102de0abf;  */

void FUN_102de0a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db502f8;
  func_0x000107c61520(&UNK_10db502f8,&UNK_1105d30b0);
  puRam0000000112f198a8 = puVar1;
  return;
}



/* Entry: 102de0ac0; end: 102de0ac3;  */

void FUN_102de0ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db503c0;
  func_0x000107c61520(&UNK_10db503c0,&UNK_1105d30b0);
  puRam0000000112f198b8 = puVar1;
  return;
}



/* Entry: 102de0ac4; end: 102de0b03;  */

void FUN_102de0ac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db503c0;
  func_0x000107c61520(&UNK_10db503c0,&UNK_1105d30b0);
  puRam0000000112f198b8 = puVar1;
  return;
}



/* Entry: 102de0b04; end: 102de0b07;  */

void FUN_102de0b04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db503e8;
  func_0x000107c61520(&UNK_10db503e8,&UNK_1105d30b0);
  puRam0000000112f198c0 = puVar1;
  return;
}



/* Entry: 102de0b08; end: 102de0b47;  */

void FUN_102de0b08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db503e8;
  func_0x000107c61520(&UNK_10db503e8,&UNK_1105d30b0);
  puRam0000000112f198c0 = puVar1;
  return;
}



/* Entry: 102de0b48; end: 102de0b67;  */

void FUN_102de0b48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e730fd8,1);
  return;
}



/* Entry: 102de0b68; end: 102de0be7;  */

void FUN_102de0b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50454;
  func_0x000107c61520(&UNK_10db50454,&UNK_1105d3138);
  puRam0000000112f198c8 = puVar1;
  return;
}



/* Entry: 102de0be8; end: 102de0beb;  */

void FUN_102de0be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50520;
  func_0x000107c61520(&UNK_10db50520,&UNK_1105d3138);
  puRam0000000112f198d8 = puVar1;
  return;
}



/* Entry: 102de0bec; end: 102de0c2b;  */

void FUN_102de0bec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50520;
  func_0x000107c61520(&UNK_10db50520,&UNK_1105d3138);
  puRam0000000112f198d8 = puVar1;
  return;
}



/* Entry: 102de0c2c; end: 102de0c2f;  */

void FUN_102de0c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50548;
  func_0x000107c61520(&UNK_10db50548,&UNK_1105d3138);
  puRam0000000112f198e0 = puVar1;
  return;
}



/* Entry: 102de0c30; end: 102de0c6f;  */

void FUN_102de0c30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f198e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50548;
  func_0x000107c61520(&UNK_10db50548,&UNK_1105d3138);
  puRam0000000112f198e0 = puVar1;
  return;
}



/* Entry: 102de0c70; end: 102de0c8b;  */

void FUN_102de0c70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731000,1);
  return;
}



/* Entry: 102de0c8c; end: 102de0cfb;  */

void FUN_102de0c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (*param_4)();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de0cfc; end: 102de0dbb;  */

undefined8 * FUN_102de0cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 102de0dbc; end: 102de0e07;  */

undefined8 * FUN_102de0dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102de0e08; end: 102de0e9f;  */

int FUN_102de0e08(ulong *param_1,int param_2)

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



/* Entry: 102de0ea0; end: 102de0efb;  */

/* WARNING: Possible PIC construction at 0x000102de0eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102de0eb8) */

void FUN_102de0ea0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102de0efc; end: 102de0f57;  */

undefined8 * FUN_102de0efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102de0f58; end: 102de0f93;  */

undefined8 * FUN_102de0f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102de0f94; end: 102de1027;  */

int FUN_102de0f94(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102de1028; end: 102de1077;  */

void FUN_102de1028(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f198e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f198f0;
  func_0x00010002969c(0x112f198f0,&UNK_10db505f0);
  puVar2 = PTR___s10AppIntents21IntentResultContainerVyxq_q0_q1_GAA0cD0AAMc_110346008;
  func_0x000107c61520(PTR___s10AppIntents21IntentResultContainerVyxq_q0_q1_GAA0cD0AAMc_110346008,
                      uVar1);
  puRam0000000112f198e8 = puVar2;
  return;
}



/* Entry: 102de1078; end: 102de10bf;  */

undefined8 FUN_102de1078(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f19880;
  func_0x0001000285a8(0x112f19880,&UNK_10db50258);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102de10c0; end: 102de110f;  */

void FUN_102de10c0(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102de17f8;
  *(undefined1 *)(plVar1 + 0xd) = param_1;
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  plVar1[8] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = 0x102de22d0;
  plVar2[0x20] = (long)(plVar1 + 2);
  plVar2[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de1110; end: 102de11b7;  */

void FUN_102de1110(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de17f0;
  plVar2[0x16] = lVar5;
  plVar2[0x17] = unaff_x20 + 0x28;
  plVar2[0x14] = lVar4;
  plVar2[0x15] = lVar1;
  plVar2[0x12] = param_4;
  plVar2[0x13] = param_5;
  *(undefined1 *)(plVar2 + 0x34) = param_3;
  plVar2[0x10] = param_1;
  plVar2[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar2[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar2[0x19] = lVar4;
  plVar2[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar2[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x1c] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}


