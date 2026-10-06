/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045d0868; end: 1045d089b;  */

void FUN_1045d0868(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045d089c; end: 1045d08d7;  */

undefined8 FUN_1045d089c(void)

{
  return 0x1045d08ac;
}



/* Entry: 1045d08d8; end: 1045d09d3;  */

undefined8 FUN_1045d08d8(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x0001045f8978();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 1045d09d4; end: 1045d0a1f;  */

void FUN_1045d09d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 1045d0a20; end: 1045d0b1b;  */

undefined1  [16] FUN_1045d0a20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0xad70);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = FUN_1045d0b1c;
  return auVar14;
}



/* Entry: 1045d0b1c; end: 1045d0b1f;  */

void FUN_1045d0b1c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    func_0x00010458a4f4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                        *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
    *(undefined8 *)(lVar2 + 0x28) = uVar10;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x0001045f89a4(puVar1 + 4,puVar1 + 8);
    func_0x00010458a4f4(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    *(undefined8 *)(lVar2 + 0x38) = uVar5;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    func_0x0001045f89d8(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1);
  return;
}



/* Entry: 1045d0b20; end: 1045d0bbf;  */

bool FUN_1045d0b20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
  }
  else {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x00010458a4f4(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045d0bc0; end: 1045d0be3;  */

void FUN_1045d0bc0(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1045d0be4; end: 1045d0beb;  */

void FUN_1045d0be4(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 1045d0bec; end: 1045d0c13;  */

void FUN_1045d0bec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d0c14; end: 1045d0c27;  */

undefined8 FUN_1045d0c14(void)

{
  return 0x1045d0c24;
}



/* Entry: 1045d0c28; end: 1045d0c57;  */

undefined1  [16] FUN_1045d0c28(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d0c58; end: 1045d0c8b;  */

void FUN_1045d0c58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d0c8c; end: 1045d0ca7;  */

undefined1  [16] FUN_1045d0c8c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d0c9c;
  return auVar1;
}



/* Entry: 1045d0ca8; end: 1045d0ccf;  */

void FUN_1045d0ca8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d0cd0; end: 1045d0ceb;  */

undefined1  [16] FUN_1045d0cd0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d0ce0;
  return auVar1;
}



/* Entry: 1045d0cec; end: 1045d0d13;  */

void FUN_1045d0cec(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d0d14; end: 1045d0e4f;  */

undefined1  [16] FUN_1045d0d14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d0d24;
  return auVar1;
}



/* Entry: 1045d0e50; end: 1045d0f4b;  */

undefined1  [16] FUN_1045d0e50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x2ad1);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = FUN_1045d0f4c;
  return auVar14;
}



/* Entry: 1045d0f4c; end: 1045d0f53;  */

void FUN_1045d0f4c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    func_0x00010458a4f4(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                        *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(undefined8 *)(lVar2 + 0x30) = uVar10;
    *(undefined8 *)(lVar2 + 0x28) = uVar8;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar10 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x0001045f89a4(puVar1 + 4,puVar1 + 8);
    func_0x00010458a4f4(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    func_0x0001045f89d8(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1);
  return;
}



/* Entry: 1045d0f54; end: 1045d0ff7;  */

bool FUN_1045d0f54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
  }
  else {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x00010458a4f4(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045d0ff8; end: 1045d1003;  */

void FUN_1045d0ff8(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1045d1004; end: 1045d102b;  */

void FUN_1045d1004(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d102c; end: 1045d103f;  */

undefined8 FUN_1045d102c(void)

{
  return 0x1045d103c;
}



/* Entry: 1045d1040; end: 1045d106f;  */

undefined1  [16] FUN_1045d1040(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d1070; end: 1045d10a3;  */

void FUN_1045d1070(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d10a4; end: 1045d10bf;  */

undefined1  [16] FUN_1045d10a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d10b4;
  return auVar1;
}



/* Entry: 1045d10c0; end: 1045d10e7;  */

void FUN_1045d10c0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d10e8; end: 1045d115f;  */

undefined1  [16] FUN_1045d10e8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d10f8;
  return auVar1;
}



/* Entry: 1045d1160; end: 1045d125b;  */

undefined8 FUN_1045d1160(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x0001045f8978();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 1045d125c; end: 1045d12a7;  */

void FUN_1045d125c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 1045d12a8; end: 1045d1447;  */

undefined1  [16] FUN_1045d12a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x85dc);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x104604a14;
  return auVar14;
}



/* Entry: 1045d1448; end: 1045d146f;  */

void FUN_1045d1448(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1045d1470; end: 1045d14cf;  */

byte FUN_1045d1470(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x48) & 1;
}



/* Entry: 1045d14d0; end: 1045d15bb;  */

void FUN_1045d14d0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  bVar6 = *(long *)(unaff_x20 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar8 = 0xc;
  uVar7 = uVar8;
  if (bVar6) {
    uVar7 = (undefined1)*(undefined8 *)(unaff_x20 + 0x60);
  }
  if (bVar6) {
    uVar8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(unaff_x20 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x78);
  }
  FUN_1045f8f78();
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((long)param_1 + 0x11) = uVar8;
  param_1[3] = uVar4;
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}



/* Entry: 1045d15bc; end: 1045d166b;  */

undefined1  [16] FUN_1045d15bc(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  puVar7 = (undefined8 *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0xbe9a);
  }
  *param_1 = puVar7;
  puVar7[6] = unaff_x20;
  bVar6 = *(long *)(unaff_x20 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar9 = 0xc;
  uVar8 = uVar9;
  if (bVar6) {
    uVar8 = (undefined1)*(undefined8 *)(unaff_x20 + 0x60);
    uVar9 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(unaff_x20 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x78);
  }
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  *(undefined1 *)(puVar7 + 2) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x11) = uVar9;
  puVar7[3] = uVar4;
  puVar7[4] = lVar5;
  *(undefined1 *)(puVar7 + 5) = uVar1;
  FUN_1045f8f78();
  auVar10._8_8_ = puVar7;
  auVar10._0_8_ = FUN_1045d166c;
  return auVar10;
}



/* Entry: 1045d166c; end: 1045d1783;  */

void FUN_1045d166c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = (undefined8 *)*param_1;
  lVar11 = param_1[6];
  uVar12 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar8 = *(undefined1 *)(param_1 + 5);
  uVar10 = *(ushort *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar11 + 0x50);
  uVar6 = *(undefined8 *)(lVar11 + 0x58);
  uVar3 = *(undefined8 *)(lVar11 + 0x60);
  uVar7 = *(undefined8 *)(lVar11 + 0x68);
  uVar13 = *(undefined8 *)(lVar11 + 0x70);
  uVar9 = *(undefined1 *)(lVar11 + 0x78);
  if ((param_2 & 1) == 0) {
    FUN_10458a570(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
  }
  else {
    func_0x00010006c00c(uVar12,uVar4);
    _swift_bridgeObjectRetain(uVar5);
    FUN_10458a570(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
    uVar12 = param_1[4];
    func_0x00010006c090(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045d1784; end: 1045d1857;  */

bool FUN_1045d1784(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_58 = (undefined1)*(undefined8 *)(unaff_x20 + 0x68);
  uStack_4f = (undefined7)*(undefined8 *)(unaff_x20 + 0x71);
  uStack_48 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x71) >> 0x38);
  uVar6 = uStack_48;
  uStack_57 = (undefined7)*(undefined8 *)(unaff_x20 + 0x69);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x69) >> 0x38);
  uVar5 = CONCAT71(uStack_57,uStack_58);
  lVar1 = CONCAT71(uStack_4f,uStack_50);
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  uStack_60 = uVar4;
  if (lVar1 == 1) {
    func_0x0001045f8fa8(&uStack_70,auStack_a0,0x113087c08,&UNK_10dd19c98);
  }
  else {
    func_0x0001045f8fa8(&uStack_70,auStack_a0,0x113087c08,&UNK_10dd19c98);
    FUN_10458a570(uVar2,uVar3,uVar4,uVar5,lVar1,uVar6);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  FUN_10458a570(uVar2,uVar3,uVar4,uVar5,1,uVar6);
  return lVar1 != 1;
}



/* Entry: 1045d1858; end: 1045d188f;  */

void FUN_1045d1858(void)

{
  long unaff_x20;
  
  FUN_10458a570(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined1 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 1;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  return;
}



/* Entry: 1045d1890; end: 1045d1897;  */

void FUN_1045d1890(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 1045d1898; end: 1045d18bf;  */

void FUN_1045d1898(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d18c0; end: 1045d18d3;  */

undefined8 FUN_1045d18c0(void)

{
  return 0x1045d18d0;
}



/* Entry: 1045d18d4; end: 1045d1903;  */

undefined1  [16] FUN_1045d18d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d1904; end: 1045d1937;  */

void FUN_1045d1904(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d1938; end: 1045d1953;  */

undefined1  [16] FUN_1045d1938(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d1948;
  return auVar1;
}



/* Entry: 1045d1954; end: 1045d197b;  */

void FUN_1045d1954(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d197c; end: 1045d1997;  */

undefined1  [16] FUN_1045d197c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d198c;
  return auVar1;
}



/* Entry: 1045d1998; end: 1045d19bf;  */

void FUN_1045d1998(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d19c0; end: 1045d19d3;  */

undefined1  [16] FUN_1045d19c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d19d0;
  return auVar1;
}



/* Entry: 1045d19d4; end: 1045d1acf;  */

undefined8 FUN_1045d19d4(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x0001045f8978();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 1045d1ad0; end: 1045d1b1b;  */

void FUN_1045d1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 1045d1b1c; end: 1045d1c17;  */

undefined1  [16] FUN_1045d1b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x1056);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x104604a18;
  return auVar14;
}



/* Entry: 1045d1c18; end: 1045d1cc3;  */

void FUN_1045d1c18(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    func_0x00010458a4f4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                        *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
    *(undefined8 *)(lVar2 + 0x28) = uVar10;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x0001045f89a4(puVar1 + 4,puVar1 + 8);
    func_0x00010458a4f4(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    *(undefined8 *)(lVar2 + 0x38) = uVar5;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    func_0x0001045f89d8(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1);
  return;
}



/* Entry: 1045d1cc4; end: 1045d1d63;  */

bool FUN_1045d1cc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
  }
  else {
    func_0x0001045f8fa8(&uStack_50,auStack_70,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar1,uVar2,lVar4,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x00010458a4f4(uVar1,uVar2,0,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045d1d64; end: 1045d1d87;  */

void FUN_1045d1d64(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1045d1d88; end: 1045d1def;  */

byte FUN_1045d1d88(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x40) & 1;
}



/* Entry: 1045d1df0; end: 1045d1e17;  */

void FUN_1045d1df0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d1e18; end: 1045d1e2b;  */

undefined8 FUN_1045d1e18(void)

{
  return 0x1045d1e28;
}



/* Entry: 1045d1e2c; end: 1045d1e5b;  */

undefined1  [16] FUN_1045d1e2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d1e5c; end: 1045d1e8f;  */

void FUN_1045d1e5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d1e90; end: 1045d1eab;  */

undefined1  [16] FUN_1045d1e90(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d1ea0;
  return auVar1;
}



/* Entry: 1045d1eac; end: 1045d1ed3;  */

void FUN_1045d1eac(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d1ed4; end: 1045d1eef;  */

undefined1  [16] FUN_1045d1ed4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d1ee4;
  return auVar1;
}



/* Entry: 1045d1ef0; end: 1045d1f17;  */

void FUN_1045d1ef0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045d1f18; end: 1045d1fb3;  */

undefined1  [16] FUN_1045d1f18(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d1f28;
  return auVar1;
}



/* Entry: 1045d1fb4; end: 1045d20af;  */

undefined8 FUN_1045d1fb4(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_6f;
  undefined1 uStack_68;
  undefined1 uStack_5e;
  undefined1 uStack_55;
  undefined1 uStack_4c;
  undefined1 uStack_43;
  undefined1 uStack_3a;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    uVar4 = 0;
    uStack_31 = 5;
    uStack_3a = 3;
    uStack_43 = 3;
    uStack_4c = 3;
    uStack_55 = 3;
    uStack_5e = 3;
    uStack_68 = 4;
    uStack_6f = 3;
  }
  else {
    uStack_31 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_3a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_43 = (undefined1)((ulong)uVar1 >> 0x28);
    uStack_4c = (undefined1)((ulong)uVar1 >> 0x20);
    uStack_55 = (undefined1)((ulong)uVar1 >> 0x18);
    uStack_5e = (undefined1)((ulong)uVar1 >> 0x10);
    uStack_68 = (undefined1)uVar1;
    uStack_6f = (undefined1)((ulong)uVar1 >> 8);
  }
  func_0x0001045f8978();
  auVar2[4] = uStack_4c;
  auVar2._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar2[5] = 0;
  auVar2[6] = uStack_3a;
  auVar2[7] = 0;
  auVar2[8] = uStack_68;
  auVar2._9_2_ = 0;
  auVar2[0xb] = uStack_55;
  auVar2[0xc] = 0;
  auVar2[0xd] = uStack_43;
  auVar2[0xe] = 0;
  auVar2[0xf] = uStack_31;
  auVar3[4] = uStack_4c;
  auVar3._0_4_ = (uint)CONCAT11(uStack_5e,uStack_6f) << 8;
  auVar3[5] = 0;
  auVar3[6] = uStack_3a;
  auVar3[7] = 0;
  auVar3[8] = uStack_68;
  auVar3._9_2_ = 0;
  auVar3[0xb] = uStack_55;
  auVar3[0xc] = 0;
  auVar3[0xd] = uStack_43;
  auVar3[0xe] = 0;
  auVar3[0xf] = uStack_31;
  NEON_ext(auVar2,auVar3,8,1);
  return uVar4;
}



/* Entry: 1045d20b0; end: 1045d20fb;  */

void FUN_1045d20b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  return;
}



/* Entry: 1045d20fc; end: 1045d21f7;  */

undefined1  [16] FUN_1045d20fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x87bc);
  }
  *param_1 = puVar7;
  puVar7[0xc] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  func_0x0001045f8978();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = 0x104604a1c;
  return auVar14;
}



/* Entry: 1045d21f8; end: 1045d22ab;  */

void FUN_1045d21f8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = puVar1[0xc];
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uVar6 = puVar1[3];
    uVar4 = puVar1[2];
    func_0x00010458a4f4(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                        *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x40) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(undefined8 *)(lVar2 + 0x30) = uVar10;
    *(undefined8 *)(lVar2 + 0x28) = uVar8;
  }
  else {
    lVar2 = puVar1[0xc];
    puVar1[5] = puVar1[1];
    puVar1[4] = *puVar1;
    puVar1[7] = puVar1[3];
    puVar1[6] = puVar1[2];
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar10 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = puVar1[5];
    uVar7 = puVar1[4];
    uVar5 = puVar1[7];
    uVar3 = puVar1[6];
    func_0x0001045f89a4(puVar1 + 4,puVar1 + 8);
    func_0x00010458a4f4(uVar4,uVar8,uVar6,uVar10);
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    func_0x0001045f89d8(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1);
  return;
}



/* Entry: 1045d22ac; end: 1045d22d3;  */

void FUN_1045d22ac(void)

{
  long unaff_x20;
  
  func_0x00010458a4f4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1045d22d4; end: 1045d2303;  */

undefined8 FUN_1045d22d4(void)

{
  return 0x1045d22e4;
}



/* Entry: 1045d2304; end: 1045d232f;  */

void FUN_1045d2304(void)

{
  func_0x0001000285a8(0x113087c40,&UNK_10dd19ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1045d2330; end: 1045d236f;  */

void FUN_1045d2330(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087c40;
  func_0x0001000285a8(0x113087c40,&UNK_10dd19ca0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1045d2370; end: 1045d239f;  */

undefined1  [16] FUN_1045d2370(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045d2380;
  return auVar1;
}



/* Entry: 1045d23a0; end: 1045d23c7;  */

void FUN_1045d23a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1045d23c8; end: 1045d23db;  */

undefined8 FUN_1045d23c8(void)

{
  return 0x1045d23d8;
}



/* Entry: 1045d23dc; end: 1045d241b;  */

undefined1  [16] FUN_1045d23dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045d241c; end: 1045d244f;  */

void FUN_1045d241c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1045d2450; end: 1045d24a7;  */

undefined1  [16] FUN_1045d2450(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x104604a20;
  return auVar4;
}



/* Entry: 1045d24a8; end: 1045d24b7;  */

bool FUN_1045d24a8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 1045d24b8; end: 1045d24d3;  */

void FUN_1045d24b8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 1045d24d4; end: 1045d263b;  */

undefined8 FUN_1045d24d4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x30) != '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  return uVar1;
}



/* Entry: 1045d263c; end: 1045d2677;  */

undefined1  [16] FUN_1045d263c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x60) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
  }
  func_0x000100de78a0();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 1045d2678; end: 1045d26ab;  */

void FUN_1045d2678(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 1045d26ac; end: 1045d26f7;  */

undefined1  [16] FUN_1045d26ac(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  uVar3 = *(ulong *)(unaff_x20 + 0x60) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000100de78a0();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045d26f8;
  return auVar4;
}



/* Entry: 1045d26f8; end: 1045d2777;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045d26f8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar6 = *param_1;
  uVar2 = *(undefined8 *)(uVar3 + 0x58);
  uVar4 = *(undefined8 *)(uVar3 + 0x60);
  if ((param_2 & 1) == 0) {
    func_0x0001000b44c0(uVar2,uVar4);
    *(ulong *)(uVar3 + 0x58) = uVar6;
    *(ulong *)(uVar3 + 0x60) = uVar1;
    return;
  }
  func_0x00010006c00c(uVar6,uVar1);
  func_0x0001000b44c0(uVar2,uVar4);
  *(ulong *)(uVar3 + 0x58) = uVar6;
  *(ulong *)(uVar3 + 0x60) = uVar1;
  uVar5 = (uint)(uVar1 >> 0x3e);
  if (uVar5 == 1) {
    uVar6 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar6);
  return;
}



/* Entry: 1045d2778; end: 1045d2803;  */

bool FUN_1045d2778(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = uVar2 >> 0x3c;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  if (uVar3 < 0xf) {
    func_0x0001045f8fa8(&uStack_40,auStack_50,0x112d56fe0,&UNK_10d91dda0);
    func_0x0001000b44c0(uVar1,uVar2);
    uVar1 = 0;
    uVar2 = 0xf000000000000000;
  }
  else {
    func_0x0001045f8fa8(&uStack_40,auStack_50,0x112d56fe0,&UNK_10d91dda0);
  }
  func_0x0001000b44c0(uVar1,uVar2);
  return uVar3 < 0xf;
}



/* Entry: 1045d2804; end: 1045d2827;  */

void FUN_1045d2804(void)

{
  long unaff_x20;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}



/* Entry: 1045d2828; end: 1045d2867;  */

undefined1  [16] FUN_1045d2828(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045d2868; end: 1045d289b;  */

void FUN_1045d2868(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 1045d289c; end: 1045d28f3;  */

undefined1  [16] FUN_1045d289c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045d28f4;
  return auVar4;
}



/* Entry: 1045d28f4; end: 1045d2953;  */

void FUN_1045d28f4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x68) = uVar1;
    *(undefined8 *)(lVar2 + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  return;
}



/* Entry: 1045d2954; end: 1045d2963;  */

bool FUN_1045d2954(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x70) != 0;
}



/* Entry: 1045d2964; end: 1045d297f;  */

void FUN_1045d2964(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Entry: 1045d2980; end: 1045d29af;  */

undefined1  [16] FUN_1045d2980(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045d29b0; end: 1045d29e3;  */

void FUN_1045d29b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045d29e4; end: 1045d29f7;  */

undefined1  [16] FUN_1045d29e4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045d29f4;
  return auVar1;
}



/* Entry: 1045d29f8; end: 1045d2a37;  */

undefined1  [16] FUN_1045d29f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1045d2a38; end: 1045d2a6b;  */

void FUN_1045d2a38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045d2a6c; end: 1045d2ac3;  */

undefined1  [16] FUN_1045d2a6c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_1045d2ac4;
  return auVar4;
}


